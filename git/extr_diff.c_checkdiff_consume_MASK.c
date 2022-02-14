
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct checkdiff_t {int conflict_marker_size; char* lineno; int status; int filename; TYPE_1__* o; int ws_rule; } ;
struct TYPE_4__ {int file; int use_color; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (int ,int ) ;
 char* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*,char const*,char*,int) ;
 int FUNC_4 (int ,char*,char const*,int,char*,...) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,int,unsigned long) ;
 char* FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 (char*,unsigned long,int ) ;
 int FUNC_9 (char*,unsigned long,int ,int ,char const*,char const*,char const*) ;

__attribute__((used)) static void FUNC_10(void *VAR_3, char *VAR_4, unsigned long VAR_5)
{
 struct checkdiff_t *VAR_6 = VAR_3;
 int VAR_7 = VAR_6->conflict_marker_size;
 const char *VAR_8 = FUNC_1(VAR_6->o->use_color, VAR_2);
 const char *VAR_9 = FUNC_1(VAR_6->o->use_color, VAR_1);
 const char *VAR_10 = FUNC_1(VAR_6->o->use_color, VAR_0);
 char *VAR_11;
 const char *VAR_12;

 FUNC_0(VAR_6->o);
 VAR_12 = FUNC_2(VAR_6->o);

 if (VAR_4[0] == '+') {
  unsigned VAR_13;
  VAR_6->lineno++;
  if (FUNC_6(VAR_4 + 1, VAR_7, VAR_5 - 1)) {
   VAR_6->status |= 1;
   FUNC_4(VAR_6->o->file,
    "%s%d:%s: leftover conflict marker\n",
    VAR_12, VAR_6->filename, VAR_6->lineno);
  }
  VAR_13 = FUNC_8(VAR_4 + 1, VAR_5 - 1, VAR_6->ws_rule);
  if (!VAR_13)
   return;
  VAR_6->status |= VAR_13;
  VAR_11 = FUNC_7(VAR_13);
  FUNC_4(VAR_6->o->file, "%s%d:%s: %s.\n",
   VAR_12, VAR_6->filename, VAR_6->lineno, VAR_11);
  FUNC_5(VAR_11);
  FUNC_3(VAR_6->o, VAR_10, VAR_9, VAR_4, 1);
  FUNC_9(VAR_4 + 1, VAR_5 - 1, VAR_6->ws_rule,
         VAR_6->o->file, VAR_10, VAR_9, VAR_8);
 } else if (VAR_4[0] == ' ') {
  VAR_6->lineno++;
 }
}
