
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct amd64_pvt {int fam; int model; TYPE_2__* ranges; int F1; } ;
struct TYPE_3__ {int lo; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;

__attribute__((used)) static inline u8 FUNC_1(struct amd64_pvt *VAR_1, unsigned int VAR_2)
{
 if (VAR_1->fam == 0x15 && VAR_1->model >= 0x30) {
  u32 VAR_3;
  FUNC_0(VAR_1->F1, VAR_0, &VAR_3);
  return (u8) VAR_3 & 0xF;
 }
 return (u8) (VAR_1->ranges[VAR_2].base.lo >> 8) & 0x7;
}
