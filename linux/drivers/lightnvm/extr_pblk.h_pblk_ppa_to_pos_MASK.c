
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lun; int ch; } ;
struct ppa_addr {TYPE_1__ a; } ;
struct nvm_geo {int num_ch; } ;



__attribute__((used)) static inline int FUNC_0(struct nvm_geo *VAR_0, struct ppa_addr VAR_1)
{
 return VAR_1.a.lun * VAR_0->num_ch + VAR_1.a.ch;
}
