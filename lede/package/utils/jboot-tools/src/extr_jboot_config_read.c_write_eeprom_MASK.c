
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_header {scalar_t__ type; scalar_t__ id; int length; int data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct data_header **VAR_4, int VAR_5)
{
 int VAR_6 = VAR_2;

 for (int VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (VAR_4[VAR_7]->type == VAR_0
      && VAR_4[VAR_7]->id == VAR_1) {
   VAR_6 =
       FUNC_0(VAR_3, VAR_4[VAR_7]->data,
           VAR_4[VAR_7]->length);
   break;
  }

 }

 return VAR_6;
}
