
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
typedef scalar_t__ uint32_t ;
typedef int tmp ;
struct TYPE_2__ {int offset; int length; scalar_t__ val_id; scalar_t__ key_id; } ;
typedef TYPE_1__ lmo_entry_t ;
typedef int line ;
typedef int key ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (char*,int,int,int *) ;
 int FUNC_10 (void*,int,int *) ;
 int FUNC_11 (int,int *) ;
 void* FUNC_12 (void*,int) ;
 scalar_t__ FUNC_13 (char*,int) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (char*,char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;

int FUNC_19(int VAR_0, char *VAR_1[])
{
 char VAR_2[4096];
 char VAR_3[4096];
 char VAR_4[4096];
 char VAR_5[4096];
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;
 void *VAR_10 = ((void*)0);
 lmo_entry_t *VAR_11 = ((void*)0);
 uint32_t VAR_12, VAR_13;

 FILE *VAR_14;
 FILE *VAR_15;

 if( (VAR_0 != 3) || ((VAR_14 = FUNC_6(VAR_1[1], "r")) == ((void*)0)) || ((VAR_15 = FUNC_6(VAR_1[2], "w")) == ((void*)0)) )
  FUNC_18(VAR_1[0]);

 FUNC_8(VAR_2, 0, sizeof(VAR_3));
 FUNC_8(VAR_3, 0, sizeof(VAR_4));
 FUNC_8(VAR_4, 0, sizeof(VAR_4));

 while( (((void*)0) != FUNC_4(VAR_2, sizeof(VAR_2), VAR_14)) || (VAR_6 >= 2 && FUNC_3(VAR_14)) )
 {
  if( VAR_6 == 0 && FUNC_16(VAR_2, "msgid \"") == VAR_2 )
  {
   switch(FUNC_1(VAR_2, VAR_3, sizeof(VAR_3)))
   {
    case -1:
     FUNC_0("Syntax error in msgid");
    case 0:
     VAR_6 = 1;
     break;
    default:
     VAR_6 = 2;
   }
  }
  else if( VAR_6 == 1 || VAR_6 == 2 )
  {
   if( FUNC_16(VAR_2, "msgstr \"") == VAR_2 || VAR_6 == 2 )
   {
    switch(FUNC_1(VAR_2, VAR_4, sizeof(VAR_4)))
    {
     case -1:
      VAR_6 = 4;
      break;
     default:
      VAR_6 = 3;
    }
   }
   else
   {
    switch(FUNC_1(VAR_2, VAR_5, sizeof(VAR_5)))
    {
     case -1:
      VAR_6 = 2;
      break;
     default:
      FUNC_14(VAR_3, VAR_5);
    }
   }
  }
  else if( VAR_6 == 3 )
  {
   switch(FUNC_1(VAR_2, VAR_5, sizeof(VAR_5)))
   {
    case -1:
     VAR_6 = 4;
     break;
    default:
     FUNC_14(VAR_4, VAR_5);
   }
  }

  if( VAR_6 == 4 )
  {
   if( FUNC_15(VAR_3) > 0 && FUNC_15(VAR_4) > 0 )
   {
    VAR_12 = FUNC_13(VAR_3, FUNC_15(VAR_3));
    VAR_13 = FUNC_13(VAR_4, FUNC_15(VAR_4));

    if( VAR_12 != VAR_13 )
    {
     VAR_9++;
     VAR_10 = FUNC_12(VAR_10, VAR_9 * sizeof(lmo_entry_t));
     VAR_11 = (lmo_entry_t *)VAR_10 + VAR_9 - 1;

     if (!VAR_10)
      FUNC_0("Out of memory");

     VAR_11->key_id = VAR_12;
     VAR_11->val_id = VAR_13;
     VAR_11->offset = VAR_7;
     VAR_11->length = FUNC_15(VAR_4);

     VAR_8 = FUNC_15(VAR_4) + ((4 - (FUNC_15(VAR_4) % 4)) % 4);

     FUNC_9(VAR_4, VAR_8, 1, VAR_15);
     VAR_7 += VAR_8;
    }
   }

   VAR_6 = 0;
   FUNC_8(VAR_3, 0, sizeof(VAR_3));
   FUNC_8(VAR_4, 0, sizeof(VAR_4));
  }

  FUNC_8(VAR_2, 0, sizeof(VAR_2));
 }

 FUNC_10(VAR_10, VAR_9, VAR_15);

 if( VAR_7 > 0 )
 {
  FUNC_11(VAR_7, VAR_15);
  FUNC_7(FUNC_5(VAR_15));
  FUNC_2(VAR_15);
 }
 else
 {
  FUNC_2(VAR_15);
  FUNC_17(VAR_1[2]);
 }

 FUNC_2(VAR_14);
 return(0);
}
