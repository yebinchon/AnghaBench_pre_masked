
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ata_eh_info {int serror; } ;
struct TYPE_3__ {struct ata_eh_info eh_info; } ;
struct ata_port {TYPE_1__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_eh_info*) ;
 int FUNC_1 (struct ata_eh_info*) ;
 int FUNC_2 (struct ata_eh_info*,char*) ;
 int FUNC_3 (struct ata_port*) ;
 int FUNC_4 (TYPE_1__*,int ,int*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct ata_port *VAR_3, u32 VAR_4)
{
 u32 VAR_5;
 struct ata_eh_info *VAR_6 = &VAR_3->link.eh_info;

 FUNC_0(VAR_6);


 FUNC_4(&VAR_3->link, VAR_2, &VAR_5);
 FUNC_5(&VAR_3->link, VAR_2, VAR_5);


 if (VAR_4 & VAR_0)
  FUNC_2(VAR_6, "hot plug");
 else if (VAR_4 & VAR_1)
  FUNC_2(VAR_6, "hot unplug");

 FUNC_1(VAR_6);


 VAR_6->serror |= VAR_5;

 FUNC_3(VAR_3);
}
