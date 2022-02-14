
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keys_array {int dummy; } ;
struct file_reader {int dummy; } ;
struct bwstring {int dummy; } ;
struct TYPE_2__ {int csilentflag; scalar_t__ uflag; int sflag; scalar_t__ complex_sort; } ;


 int FUNC_0 (struct bwstring*,char const*,size_t) ;
 struct bwstring* FUNC_1 (struct bwstring*) ;
 int FUNC_2 (struct bwstring*) ;
 int FUNC_3 (int ,struct bwstring*,char*,char*) ;
 int FUNC_4 (struct bwstring*,struct keys_array*) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct file_reader*) ;
 struct file_reader* FUNC_8 (char const*) ;
 struct bwstring* FUNC_9 (struct file_reader*) ;
 int FUNC_10 (struct keys_array*,struct keys_array*,int ) ;
 struct keys_array* FUNC_11 () ;
 int FUNC_12 (struct bwstring*,struct keys_array*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (struct keys_array*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_15 (char const*,char*) ;
 int FUNC_16 (struct bwstring*,struct bwstring*) ;

int
FUNC_17(const char *VAR_3)
{
 struct bwstring *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 struct file_reader *VAR_8;
 struct keys_array *VAR_9, *VAR_10;
 int VAR_11;
 size_t VAR_12, VAR_13;

 VAR_4 = VAR_5 = VAR_6 = VAR_7 = ((void*)0);
 VAR_9 = VAR_10 = ((void*)0);

 VAR_8 = FUNC_8(VAR_3);

 VAR_11 = 0;
 VAR_12 = 1;
 VAR_13 = 1;

 if (VAR_8 == ((void*)0)) {
  FUNC_5(2, ((void*)0));
  goto end;
 }

 VAR_4 = FUNC_9(VAR_8);
 if (VAR_4 == ((void*)0))
  goto end;

 VAR_9 = FUNC_11();
 FUNC_12(VAR_4, VAR_9);

 VAR_5 = FUNC_9(VAR_8);
 if (VAR_5 == ((void*)0))
  goto end;

 VAR_10 = FUNC_11();
 FUNC_12(VAR_5, VAR_10);

 for (;;) {

  if (VAR_0) {
   FUNC_3(VAR_2, VAR_5, "s1=<", ">");
   FUNC_3(VAR_2, VAR_4, "s2=<", ">");
  }
  int VAR_14 = FUNC_10(VAR_10, VAR_9, 0);
  if (VAR_0)
   FUNC_13("; cmp1=%d", VAR_14);

  if (!VAR_14 && VAR_1.complex_sort &&
      !(VAR_1.uflag) && !(VAR_1.sflag)) {
   VAR_14 = FUNC_16(VAR_5, VAR_4);
   if (VAR_0)
    FUNC_13("; cmp2=%d", VAR_14);
  }
  if (VAR_0)
   FUNC_13("\n");

  if ((VAR_1.uflag && (VAR_14 <= 0)) || (VAR_14 < 0)) {
   if (!(VAR_1.csilentflag)) {
    VAR_7 = FUNC_1(VAR_5);
    VAR_13 = VAR_12;
    if (VAR_0)
     VAR_6 = FUNC_1(VAR_4);
   }
   VAR_11 = 1;
   goto end;
  }

  VAR_12++;

  FUNC_4(VAR_4, VAR_9);
  FUNC_14(VAR_9);
  VAR_9 = VAR_10;
  VAR_10 = ((void*)0);

  FUNC_2(VAR_4);
  VAR_4 = VAR_5;

  VAR_5 = FUNC_9(VAR_8);
  if (VAR_5 == ((void*)0))
   goto end;

  VAR_10 = FUNC_11();
  FUNC_12(VAR_5, VAR_10);
 }

end:
 if (VAR_9) {
  FUNC_4(VAR_4, VAR_9);
  FUNC_14(VAR_9);
 }

 if (VAR_4)
  FUNC_2(VAR_4);

 if (VAR_10) {
  FUNC_4(VAR_5, VAR_10);
  FUNC_14(VAR_10);
 }

 if (VAR_5)
  FUNC_2(VAR_5);

 if ((VAR_3 == ((void*)0)) || (*VAR_3 == 0) || (FUNC_15(VAR_3, "-") == 0)) {
  for (;;) {
   VAR_5 = FUNC_9(VAR_8);
   if (VAR_5 == ((void*)0))
    break;
   FUNC_2(VAR_5);
  }
 }

 FUNC_7(VAR_8);

 if (VAR_7) {
  FUNC_0(VAR_7, VAR_3, VAR_13);
  if (VAR_6) {
   FUNC_0(VAR_6, VAR_3, VAR_13);
   if (VAR_6 != VAR_7)
    FUNC_2(VAR_6);
  }
  FUNC_2(VAR_7);
  VAR_6 = ((void*)0);
  VAR_7 = ((void*)0);
 }

 if (VAR_11)
  FUNC_6(VAR_11);

 return (0);
}
