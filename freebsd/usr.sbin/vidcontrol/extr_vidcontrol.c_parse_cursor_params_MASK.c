
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cshape {int* shape; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*,char*,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char**,char*) ;
 void* FUNC_8 (char*,int *,int ) ;

__attribute__((used)) static void
FUNC_9(char *VAR_9, struct cshape *VAR_10)
{
 char *VAR_11, *VAR_12;
 int VAR_13;

 VAR_9 = VAR_11 = FUNC_5(VAR_9);
 VAR_13 = VAR_10->shape[0];
 while ((VAR_12 = FUNC_7(&VAR_9, ",")) != ((void*)0)) {
  if (FUNC_4(VAR_12, "normal") == 0)
   VAR_13 = 0;
  else if (FUNC_4(VAR_12, "destructive") == 0)
   VAR_13 = VAR_0 | VAR_2;
  else if (FUNC_4(VAR_12, "blink") == 0)
   VAR_13 |= VAR_0;
  else if (FUNC_4(VAR_12, "noblink") == 0)
   VAR_13 &= ~VAR_0;
  else if (FUNC_4(VAR_12, "block") == 0)
   VAR_13 &= ~VAR_2;
  else if (FUNC_4(VAR_12, "noblock") == 0)
   VAR_13 |= VAR_2;
  else if (FUNC_4(VAR_12, "hidden") == 0)
   VAR_13 |= VAR_4;
  else if (FUNC_4(VAR_12, "nohidden") == 0)
   VAR_13 &= ~VAR_4;
  else if (FUNC_6(VAR_12, "base=", 5) == 0)
   VAR_10->shape[1] = FUNC_8(VAR_12 + 5, ((void*)0), 0);
  else if (FUNC_6(VAR_12, "height=", 7) == 0)
   VAR_10->shape[2] = FUNC_8(VAR_12 + 7, ((void*)0), 0);
  else if (FUNC_4(VAR_12, "charcolors") == 0)
   VAR_13 |= VAR_1;
  else if (FUNC_4(VAR_12, "mousecolors") == 0)
   VAR_13 |= VAR_6;
  else if (FUNC_4(VAR_12, "default") == 0)
   VAR_13 |= VAR_3;
  else if (FUNC_4(VAR_12, "shapeonly") == 0)
   VAR_13 |= VAR_8;
  else if (FUNC_4(VAR_12, "local") == 0)
   VAR_13 |= VAR_5;
  else if (FUNC_4(VAR_12, "reset") == 0)
   VAR_13 |= VAR_7;
  else if (FUNC_4(VAR_12, "show") == 0)
   FUNC_2("flags %#x, base %d, height %d\n",
       VAR_13, VAR_10->shape[1], VAR_10->shape[2]);
  else {
   FUNC_3();
   FUNC_0(1,
       "invalid parameters for -c starting at '%s%s%s'",
       VAR_12, VAR_9 != ((void*)0) ? "," : "",
       VAR_9 != ((void*)0) ? VAR_9 : "");
  }
 }
 FUNC_1(VAR_11);
 VAR_10->shape[0] = VAR_13;
}
