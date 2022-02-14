
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct setup_data {scalar_t__ next; } ;
struct TYPE_3__ {scalar_t__ setup_data; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 struct setup_data* FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (struct setup_data*) ;

__attribute__((used)) static int FUNC_2(int VAR_4, u64 *VAR_5)
{
 int VAR_6 = 0;
 struct setup_data *VAR_7;
 u64 VAR_8 = VAR_3.hdr.setup_data;

 while (VAR_8) {
  if (VAR_4 == VAR_6) {
   *VAR_5 = VAR_8;
   return 0;
  }
  VAR_7 = FUNC_0(VAR_8, sizeof(*VAR_7), VAR_2);
  if (!VAR_7)
   return -VAR_1;

  VAR_8 = VAR_7->next;
  FUNC_1(VAR_7);
  VAR_6++;
 }
 return -VAR_0;
}
