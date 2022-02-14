
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {int lines_added; int lines_deleted; scalar_t__ is_new; scalar_t__ is_delete; scalar_t__ recount; int ws_rule; } ;
struct fragment {unsigned long oldlines; unsigned long newlines; unsigned long leading; unsigned long trailing; } ;
struct apply_state {int ws_error_action; int apply_in_reverse; int linenr; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct patch*,char const*,int) ;
 int FUNC_2 (struct apply_state*,char const*,int,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,unsigned long) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;
 int VAR_1 ;
 int FUNC_6 (char const*,int,struct fragment*) ;
 int FUNC_7 (char const*,unsigned long,struct fragment*) ;

__attribute__((used)) static int FUNC_8(struct apply_state *VAR_2,
     const char *VAR_3,
     unsigned long VAR_4,
     struct patch *VAR_5,
     struct fragment *VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9 = FUNC_4(VAR_3, VAR_4), VAR_10;
 unsigned long VAR_11, VAR_12;
 unsigned long VAR_13, VAR_14;

 VAR_10 = FUNC_6(VAR_3, VAR_9, VAR_6);
 if (VAR_10 < 0)
  return -1;
 if (VAR_10 > 0 && VAR_5->recount)
  FUNC_7(VAR_3 + VAR_10, VAR_4 - VAR_10, VAR_6);
 VAR_11 = VAR_6->oldlines;
 VAR_12 = VAR_6->newlines;
 VAR_13 = 0;
 VAR_14 = 0;


 VAR_3 += VAR_9;
 VAR_4 -= VAR_9;
 VAR_2->linenr++;
 VAR_7 = VAR_8 = 0;
 for (VAR_10 = VAR_9;
      0 < VAR_4;
      VAR_10 += VAR_9, VAR_4 -= VAR_9, VAR_3 += VAR_9, VAR_2->linenr++) {
  if (!VAR_11 && !VAR_12)
   break;
  VAR_9 = FUNC_4(VAR_3, VAR_4);
  if (!VAR_9 || VAR_3[VAR_9-1] != '\n')
   return -1;
  switch (*VAR_3) {
  default:
   return -1;
  case '\n':
  case ' ':
   VAR_11--;
   VAR_12--;
   if (!VAR_8 && !VAR_7)
    VAR_13++;
   VAR_14++;
   FUNC_1(VAR_5, VAR_3, VAR_9);
   if (!VAR_2->apply_in_reverse &&
       VAR_2->ws_error_action == VAR_0)
    FUNC_2(VAR_2, VAR_3, VAR_9, VAR_5->ws_rule);
   break;
  case '-':
   if (!VAR_2->apply_in_reverse)
    FUNC_1(VAR_5, VAR_3, VAR_9);
   if (VAR_2->apply_in_reverse &&
       VAR_2->ws_error_action != VAR_1)
    FUNC_2(VAR_2, VAR_3, VAR_9, VAR_5->ws_rule);
   VAR_8++;
   VAR_11--;
   VAR_14 = 0;
   break;
  case '+':
   if (VAR_2->apply_in_reverse)
    FUNC_1(VAR_5, VAR_3, VAR_9);
   if (!VAR_2->apply_in_reverse &&
       VAR_2->ws_error_action != VAR_1)
    FUNC_2(VAR_2, VAR_3, VAR_9, VAR_5->ws_rule);
   VAR_7++;
   VAR_12--;
   VAR_14 = 0;
   break;
  case '\\':
   if (VAR_9 < 12 || FUNC_5(VAR_3, "\\ ", 2))
    return -1;
   break;
  }
 }
 if (VAR_11 || VAR_12)
  return -1;
 if (!VAR_5->recount && !VAR_8 && !VAR_7)
  return -1;

 VAR_6->leading = VAR_13;
 VAR_6->trailing = VAR_14;






 if (12 < VAR_4 && !FUNC_5(VAR_3, "\\ ", 2))
  VAR_10 += FUNC_4(VAR_3, VAR_4);

 VAR_5->lines_added += VAR_7;
 VAR_5->lines_deleted += VAR_8;

 if (0 < VAR_5->is_new && VAR_11)
  return FUNC_3(FUNC_0("new file depends on old contents"));
 if (0 < VAR_5->is_delete && VAR_12)
  return FUNC_3(FUNC_0("deleted file still has contents"));
 return VAR_10;
}
