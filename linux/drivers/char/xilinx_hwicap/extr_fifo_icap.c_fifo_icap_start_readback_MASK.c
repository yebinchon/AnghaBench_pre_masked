
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwicap_drvdata {int dev; scalar_t__ base_address; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_2(struct hwicap_drvdata *VAR_2)
{
 FUNC_1(VAR_2->base_address + VAR_0, VAR_1);
 FUNC_0(VAR_2->dev, "readback started\n");
}
