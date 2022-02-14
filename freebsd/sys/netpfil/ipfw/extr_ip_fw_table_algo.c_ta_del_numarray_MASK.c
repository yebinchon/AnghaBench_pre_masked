
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tentry_info {int value; } ;
struct table_info {scalar_t__ data; } ;
struct TYPE_2__ {int number; } ;
struct ta_buf_numarray {TYPE_1__ na; } ;
struct numarray_cfg {scalar_t__ used; int main_ptr; } ;
struct numarray {int value; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int ,scalar_t__,int,int ) ;
 int VAR_1 ;
 struct numarray* FUNC_2 (struct table_info*,int *) ;

__attribute__((used)) static int
FUNC_3(void *VAR_2, struct table_info *VAR_3, struct tentry_info *VAR_4,
    void *VAR_5, uint32_t *VAR_6)
{
 struct numarray_cfg *VAR_7;
 struct ta_buf_numarray *VAR_8;
 struct numarray *VAR_9;
 int VAR_10;

 VAR_8 = (struct ta_buf_numarray *)VAR_5;
 VAR_7 = (struct numarray_cfg *)VAR_2;

 VAR_9 = FUNC_2(VAR_3, &VAR_8->na.number);
 if (VAR_9 == ((void*)0))
  return (VAR_0);

 VAR_4->value = VAR_9->value;

 VAR_10 = FUNC_1(&VAR_8->na.number, VAR_7->main_ptr, VAR_7->used,
     sizeof(struct numarray), VAR_1);

 FUNC_0(VAR_10 == 1, ("number %u does not exist", VAR_8->na.number));
 VAR_7->used--;
 VAR_3->data = VAR_7->used;
 *VAR_6 = 1;

 return (0);
}
