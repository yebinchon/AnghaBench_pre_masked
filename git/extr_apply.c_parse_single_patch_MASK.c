
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {scalar_t__ is_new; scalar_t__ is_delete; int new_name; int old_name; struct fragment* fragments; } ;
struct fragment {char const* patch; int size; struct fragment* next; scalar_t__ trailing; scalar_t__ leading; scalar_t__ newlines; scalar_t__ oldlines; int linenr; } ;
struct apply_state {scalar_t__ apply_verbosity; int linenr; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct fragment*) ;
 int FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (struct apply_state*,char const*,unsigned long,struct patch*,struct fragment*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct fragment* FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct apply_state *VAR_2,
         const char *VAR_3,
         unsigned long VAR_4,
         struct patch *VAR_5)
{
 unsigned long VAR_6 = 0;
 unsigned long VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 struct fragment **VAR_10 = &VAR_5->fragments;

 while (VAR_4 > 4 && !FUNC_4(VAR_3, "@@ -", 4)) {
  struct fragment *VAR_11;
  int VAR_12;

  VAR_11 = FUNC_6(1, sizeof(*VAR_11));
  VAR_11->linenr = VAR_2->linenr;
  VAR_12 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, VAR_11);
  if (VAR_12 <= 0) {
   FUNC_3(VAR_11);
   return FUNC_1(FUNC_0("corrupt patch at line %d"), VAR_2->linenr);
  }
  VAR_11->patch = VAR_3;
  VAR_11->size = VAR_12;
  VAR_7 += VAR_11->oldlines;
  VAR_8 += VAR_11->newlines;
  VAR_9 += VAR_11->leading + VAR_11->trailing;

  *VAR_10 = VAR_11;
  VAR_10 = &VAR_11->next;

  VAR_6 += VAR_12;
  VAR_3 += VAR_12;
  VAR_4 -= VAR_12;
 }
 if (VAR_5->is_new < 0 &&
     (VAR_7 || (VAR_5->fragments && VAR_5->fragments->next)))
  VAR_5->is_new = 0;
 if (VAR_5->is_delete < 0 &&
     (VAR_8 || (VAR_5->fragments && VAR_5->fragments->next)))
  VAR_5->is_delete = 0;

 if (0 < VAR_5->is_new && VAR_7)
  return FUNC_1(FUNC_0("new file %s depends on old contents"), VAR_5->new_name);
 if (0 < VAR_5->is_delete && VAR_8)
  return FUNC_1(FUNC_0("deleted file %s still has contents"), VAR_5->old_name);
 if (!VAR_5->is_delete && !VAR_8 && VAR_9 && VAR_2->apply_verbosity > VAR_1)
  FUNC_2(VAR_0,
      FUNC_0("** warning: "
        "file %s becomes empty but is not deleted"),
      VAR_5->new_name);

 return VAR_6;
}
