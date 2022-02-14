
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pms7003_frame {int length; scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct pms7003_frame*) ;

__attribute__((used)) static bool FUNC_2(struct pms7003_frame *VAR_1)
{
 int VAR_2 = VAR_1->length - VAR_0;
 u16 VAR_3 = FUNC_0(VAR_1->data + VAR_2);

 return VAR_3 == FUNC_1(VAR_1);
}
