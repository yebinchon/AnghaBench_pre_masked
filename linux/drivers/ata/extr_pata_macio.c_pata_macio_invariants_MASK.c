
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pata_macio_priv {int aapl_bus_id; scalar_t__ mediabay; int node; void* timings; int kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int* FUNC_1 (int ,char*,int *) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;

__attribute__((used)) static void FUNC_3(struct pata_macio_priv *VAR_13)
{
 const int *VAR_14;


 if (FUNC_0(VAR_13->node, "shasta-ata")) {
  VAR_13->kind = VAR_5;
         VAR_13->timings = VAR_12;
 } else if (FUNC_0(VAR_13->node, "kauai-ata")) {
  VAR_13->kind = VAR_6;
         VAR_13->timings = VAR_8;
 } else if (FUNC_0(VAR_13->node, "K2-UATA")) {
  VAR_13->kind = VAR_1;
         VAR_13->timings = VAR_8;
 } else if (FUNC_0(VAR_13->node, "keylargo-ata")) {
  if (FUNC_2(VAR_13->node, "ata-4")) {
   VAR_13->kind = VAR_3;
   VAR_13->timings = VAR_10;
  } else {
   VAR_13->kind = VAR_2;
   VAR_13->timings = VAR_9;
  }
 } else if (FUNC_0(VAR_13->node, "heathrow-ata")) {
  VAR_13->kind = VAR_0;
  VAR_13->timings = VAR_7;
 } else {
  VAR_13->kind = VAR_4;
  VAR_13->timings = VAR_11;
 }




 VAR_14 = FUNC_1(VAR_13->node, "AAPL,bus-id", ((void*)0));
 VAR_13->aapl_bus_id = VAR_14 ? *VAR_14 : 0;


 if (VAR_13->mediabay && VAR_14 == 0)
  VAR_13->aapl_bus_id = 1;
}
