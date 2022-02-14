
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbpf_channel {int dmarq_cfg; scalar_t__ flags; scalar_t__ terminal; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct nbpf_channel *VAR_1)
{

 VAR_1->dmarq_cfg = VAR_0 & 0x400;
 VAR_1->terminal = 0;
 VAR_1->flags = 0;
}
