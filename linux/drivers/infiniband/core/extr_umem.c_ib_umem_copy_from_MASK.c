
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sgl; } ;
struct ib_umem {size_t length; int sg_nents; TYPE_1__ sg_head; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_umem*) ;
 int FUNC_1 (char*,size_t,size_t,size_t) ;
 int FUNC_2 (int ,int ,void*,size_t,scalar_t__) ;

int FUNC_3(void *VAR_1, struct ib_umem *VAR_2, size_t VAR_3,
        size_t VAR_4)
{
 size_t VAR_5 = VAR_3 + VAR_4;
 int VAR_6;

 if (VAR_3 > VAR_2->length || VAR_4 > VAR_2->length - VAR_3) {
  FUNC_1("ib_umem_copy_from not in range. offset: %zd umem length: %zd end: %zd\n",
         VAR_3, VAR_2->length, VAR_5);
  return -VAR_0;
 }

 VAR_6 = FUNC_2(VAR_2->sg_head.sgl, VAR_2->sg_nents, VAR_1, VAR_4,
     VAR_3 + FUNC_0(VAR_2));

 if (VAR_6 < 0)
  return VAR_6;
 else if (VAR_6 != VAR_4)
  return -VAR_0;
 else
  return 0;
}
