
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int debugfs_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char*,int,int ,struct zpci_dev*,int *) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_2(struct zpci_dev *VAR_5, const char *VAR_6)
{
 VAR_5->debugfs_dev = FUNC_0(VAR_6, VAR_4);

 FUNC_1("statistics", VAR_0 | VAR_1 | VAR_2,
       VAR_5->debugfs_dev, VAR_5, &VAR_3);
}
