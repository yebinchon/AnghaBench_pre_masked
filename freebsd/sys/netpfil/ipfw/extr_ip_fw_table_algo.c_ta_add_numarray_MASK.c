
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tentry_info {int value; int flags; } ;
struct table_info {scalar_t__ data; } ;
struct TYPE_2__ {int value; int number; } ;
struct ta_buf_numarray {TYPE_1__ na; } ;
struct numarray_cfg {scalar_t__ used; int main_ptr; } ;
struct numarray {int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,TYPE_1__*,int ,scalar_t__,int,int ) ;
 int VAR_5 ;
 struct numarray* FUNC_2 (struct table_info*,int *) ;

__attribute__((used)) static int
FUNC_3(void *VAR_6, struct table_info *VAR_7, struct tentry_info *VAR_8,
    void *VAR_9, uint32_t *VAR_10)
{
 struct numarray_cfg *VAR_11;
 struct ta_buf_numarray *VAR_12;
 struct numarray *VAR_13;
 int VAR_14;
 uint32_t VAR_15;

 VAR_12 = (struct ta_buf_numarray *)VAR_9;
 VAR_11 = (struct numarray_cfg *)VAR_6;


 VAR_12->na.value = VAR_8->value;

 VAR_13 = FUNC_2(VAR_7, &VAR_12->na.number);

 if (VAR_13 != ((void*)0)) {
  if ((VAR_8->flags & VAR_3) == 0)
   return (VAR_0);


  VAR_15 = VAR_13->value;
  VAR_13->value = VAR_8->value;
  VAR_8->value = VAR_15;

  VAR_8->flags |= VAR_4;
  *VAR_10 = 0;
  return (0);
 }

 if ((VAR_8->flags & VAR_2) != 0)
  return (VAR_1);

 VAR_14 = FUNC_1(&VAR_12->na.number, &VAR_12->na, VAR_11->main_ptr, VAR_11->used,
     sizeof(struct numarray), VAR_5);

 FUNC_0(VAR_14 == 1, ("number %d already exists", VAR_12->na.number));
 VAR_11->used++;
 VAR_7->data = VAR_11->used;
 *VAR_10 = 1;

 return (0);
}
