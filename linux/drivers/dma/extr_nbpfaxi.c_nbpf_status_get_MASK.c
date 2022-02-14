
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nbpf_channel {TYPE_1__* nbpf; } ;
struct TYPE_2__ {int chan; } ;


 int FUNC_0 (struct nbpf_channel*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static bool FUNC_2(struct nbpf_channel *VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_1->nbpf, VAR_0);

 return VAR_2 & FUNC_0(VAR_1 - VAR_1->nbpf->chan);
}
