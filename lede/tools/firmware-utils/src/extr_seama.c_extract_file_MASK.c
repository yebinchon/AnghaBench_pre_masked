
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ magic; int metasize; int size; } ;
typedef TYPE_1__ uint8_t ;
typedef int shdr ;
typedef TYPE_1__ seamahdr_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 size_t FUNC_4 (TYPE_1__*,int,size_t,int *) ;
 int FUNC_5 (TYPE_1__*,int,size_t,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char const*,size_t) ;
 size_t FUNC_8 (int ) ;
 size_t FUNC_9 (int ) ;
 char** VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (char*,int ) ;

__attribute__((used)) static void FUNC_12(const char * VAR_5)
{
 FILE * VAR_6 = ((void*)0);
 FILE * VAR_7 = ((void*)0);
 size_t VAR_8, VAR_9, VAR_10, VAR_11;
 seamahdr_t VAR_12;
 uint8_t VAR_13[VAR_0];
 int VAR_14 = 0;


 if (VAR_4 == 0)
 {
  FUNC_10("SEAMA: need meta for searching image.\n");
  return;
 }


 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
 {

  if (FUNC_11(VAR_2[VAR_10], 0) < 0)
  {
   FUNC_10("SEAMA: '%s' is not a seama file !\n", VAR_2[VAR_10]);
   continue;
  }

  VAR_6 = FUNC_3(VAR_2[VAR_10], "r");
  if (!VAR_6) continue;

  while (!FUNC_1(VAR_6) && !FUNC_2(VAR_6))
  {

   FUNC_4(&VAR_12, sizeof(VAR_12), 1, VAR_6);
   if (VAR_12.magic != FUNC_6(VAR_1)) break;

   VAR_9 = FUNC_8(VAR_12.size);
   VAR_8 = FUNC_9(VAR_12.metasize);
   if (VAR_9 == 0)
   {
    while (VAR_8 > 0)
    {
     VAR_11 = FUNC_4(VAR_13, sizeof(char), (VAR_8 < VAR_0) ? VAR_8 : VAR_0, VAR_6);
     if (VAR_11 <= 0) break;
     VAR_8 -= VAR_11;
    }
    continue;
   }

   FUNC_4(VAR_13, sizeof(char), 16, VAR_6);
   if (VAR_8 > 0)
   {

    FUNC_4(VAR_13, sizeof(char), VAR_8, VAR_6);
    if (FUNC_7((const char *)VAR_13, VAR_8))
    {
     FUNC_10("SEAMA: found image @ '%s', image size: %zu\n", VAR_2[VAR_10], VAR_9);

     VAR_7 = FUNC_3(VAR_5, "w");
     if (!VAR_7) FUNC_10("SEAMA: unable to open '%s' for writting.\n",VAR_5);
     else
     {
      while (VAR_9 > 0)
      {
       VAR_11 = FUNC_4(VAR_13, sizeof(char), (VAR_9 < VAR_0) ? VAR_9 : VAR_0, VAR_6);
       if (VAR_11 <= 0) break;
       FUNC_5(VAR_13, sizeof(char), VAR_11, VAR_7);
       VAR_9 -= VAR_11;
      }
      FUNC_0(VAR_7);
     }
     VAR_14++;
     break;
    }
   }
   while (VAR_9 > 0)
   {
    VAR_11 = FUNC_4(VAR_13, sizeof(char), (VAR_9 < VAR_0) ? VAR_9 : VAR_0, VAR_6);
    if (VAR_11 <= 0) break;
    VAR_9 -= VAR_11;
   }
  }

  FUNC_0(VAR_6);
  if (VAR_14) break;
 }
 return;
}
