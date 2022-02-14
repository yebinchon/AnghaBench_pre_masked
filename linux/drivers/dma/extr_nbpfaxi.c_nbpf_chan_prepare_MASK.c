
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbpf_channel {int dmarq_cfg; int flags; int terminal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct nbpf_channel *VAR_7)
{
 VAR_7->dmarq_cfg = (VAR_7->flags & VAR_4 ? VAR_1 : 0) |
  (VAR_7->flags & VAR_6 ? VAR_2 : 0) |
  (VAR_7->flags & VAR_5 ?
   VAR_3 | (VAR_0 & 0x200) : 0) |
  VAR_7->terminal;
}
