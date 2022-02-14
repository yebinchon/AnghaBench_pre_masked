
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {scalar_t__ class; int id; } ;
typedef int model_num ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int ,char*,int ,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static unsigned long FUNC_2(struct ata_device *VAR_5, unsigned long VAR_6)
{
 char VAR_7[VAR_2 + 1];

 if (VAR_5->class != VAR_0)
  VAR_6 &= ~(VAR_3 | VAR_4);
 FUNC_0(VAR_5->id, VAR_7, VAR_1, sizeof(VAR_7));
 if (FUNC_1(VAR_7, "WDC"))
  return VAR_6 &= ~VAR_4;
 return VAR_6;
}
