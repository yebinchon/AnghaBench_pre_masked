
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* buf; int len; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int,int,int *) ;
 scalar_t__ FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (char const*,int,int) ;
 int VAR_6 ;
 int FUNC_9 (TYPE_1__*,char) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int *,char) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int * FUNC_13 (int,char*) ;

__attribute__((used)) static int FUNC_14(FILE *VAR_7, const char *VAR_8, int VAR_9)
{
 FILE *VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 int VAR_13 = !FUNC_6(VAR_3.buf, VAR_3.len);

 if (VAR_13 && !VAR_9) {
  FUNC_4(VAR_6, "corrupt mailbox\n");
  FUNC_1(1);
 }
 VAR_11 = FUNC_8(VAR_8, VAR_2 | VAR_0 | VAR_1, 0666);
 if (VAR_11 < 0)
  FUNC_0("cannot open output file '%s'", VAR_8);
 VAR_10 = FUNC_13(VAR_11, "w");




 for (;;) {
  if (!VAR_4 && VAR_3.len > 1 && VAR_3.buf[VAR_3.len-1] == '\n' &&
   VAR_3.buf[VAR_3.len-2] == '\r') {
   FUNC_12(&VAR_3, VAR_3.len-2);
   FUNC_9(&VAR_3, '\n');
  }

  if (VAR_5 && FUNC_7(&VAR_3))
   FUNC_11(&VAR_3, 0, 1);

  if (FUNC_5(VAR_3.buf, 1, VAR_3.len, VAR_10) != VAR_3.len)
   FUNC_0("cannot write output");

  if (FUNC_10(&VAR_3, VAR_7, '\n')) {
   if (FUNC_3(VAR_7)) {
    VAR_12 = 1;
    break;
   }
   FUNC_0("cannot read mbox");
  }
  if (!VAR_13 && FUNC_6(VAR_3.buf, VAR_3.len))
   break;
 }
 FUNC_2(VAR_10);
 return VAR_12;
}
