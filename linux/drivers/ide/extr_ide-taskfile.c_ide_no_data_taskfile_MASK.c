
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_cmd {int protocol; } ;
typedef int ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ide_cmd*,int *,int ) ;

int FUNC_1(ide_drive_t *VAR_1, struct ide_cmd *VAR_2)
{
 VAR_2->protocol = VAR_0;

 return FUNC_0(VAR_1, VAR_2, ((void*)0), 0);
}
