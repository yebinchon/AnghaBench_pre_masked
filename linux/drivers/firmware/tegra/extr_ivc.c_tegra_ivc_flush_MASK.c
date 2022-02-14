
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_ivc {int peer; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct tegra_ivc *VAR_2, dma_addr_t VAR_3)
{
 if (!VAR_2->peer)
  return;

 FUNC_0(VAR_2->peer, VAR_3, VAR_1,
       VAR_0);
}
