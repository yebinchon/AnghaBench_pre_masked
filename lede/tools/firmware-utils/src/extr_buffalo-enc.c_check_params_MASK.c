
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int * VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_1 (int *) ;
 int * VAR_10 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_11 = -1;

 if (VAR_6 == ((void*)0)) {
  FUNC_0("no input file specified");
  goto out;
 }

 if (VAR_8 == ((void*)0)) {
  FUNC_0("no output file specified");
  goto out;
 }

 if (VAR_4 == ((void*)0)) {
  FUNC_0("no key specified");
  goto out;
 } else if (FUNC_1(VAR_4) > VAR_0) {
  FUNC_0("key '%s' is too long", VAR_4);
  goto out;
 }

 if (FUNC_1(VAR_7) != (VAR_1 - 1)) {
  FUNC_0("length of magic must be %d", VAR_1 - 1);
  goto out;
 }

 if (!VAR_5) {
  if (VAR_9 == ((void*)0)) {
   FUNC_0("no product specified");
   goto out;
  }

  if (VAR_10 == ((void*)0)) {
   FUNC_0("no version specified");
   goto out;
  }

  if (FUNC_1(VAR_9) > (VAR_2 - 1)) {
   FUNC_0("product name '%s' is too long", VAR_9);
   goto out;
  }

  if (FUNC_1(VAR_10) > (VAR_3 - 1)) {
   FUNC_0("version '%s' is too long", VAR_10);
   goto out;
  }
 }

 VAR_11 = 0;

out:
 return VAR_11;
}
