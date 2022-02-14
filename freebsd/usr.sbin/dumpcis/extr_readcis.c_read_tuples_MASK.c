
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tuple_list {struct tuple_list* next; } ;
struct tuple {int length; int data; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 struct tuple* FUNC_1 (struct tuple_list*,int ) ;
 int FUNC_2 (char*,...) ;
 void* FUNC_3 (int,int,int) ;
 struct tuple_list* VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static struct tuple_list *
FUNC_5(int VAR_6)
{
 struct tuple_list *VAR_7 = 0, *VAR_8;
 struct tuple *VAR_9;
 int VAR_10;
 off_t VAR_11;

 VAR_5 = 0;
 VAR_8 = VAR_5 = FUNC_3(VAR_6, VAR_4, (off_t) 0);


 do {
  VAR_10 = VAR_4;
  VAR_9 = FUNC_1(VAR_8, VAR_1);
  if (VAR_9 == ((void*)0)) {
   VAR_10 = 0;
   VAR_9 = FUNC_1(VAR_8, VAR_2);
  }

  if (VAR_9 == ((void*)0) || VAR_9->length != 4)
   break;

  VAR_11 = (uint32_t)FUNC_4(VAR_9->data);







  if (VAR_11 > 0 && VAR_11 < 32 * 1024 && FUNC_0(VAR_6, VAR_11, VAR_10)) {
   VAR_7 = FUNC_3(VAR_6, VAR_10, VAR_11);
   VAR_8->next = VAR_7;
   VAR_8 = VAR_7;
  }
 } while (VAR_7);





 if (FUNC_1(VAR_5, VAR_3) == 0 &&
     FUNC_1(VAR_5, VAR_0) == 0 &&
     FUNC_0(VAR_6, (off_t) 0, 0)) {



  VAR_5->next = FUNC_3(VAR_6, 0, 0);
 }
 return (VAR_5);
}
