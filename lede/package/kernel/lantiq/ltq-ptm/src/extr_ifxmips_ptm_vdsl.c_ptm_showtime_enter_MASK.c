
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_cell_info {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct port_cell_info *VAR_4, void *VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_4 != ((void*)0), "port_cell is NULL");
 FUNC_1(VAR_5 != ((void*)0), "xdata_addr is NULL");


 VAR_3 = VAR_5;

 VAR_2 = 1;

 for ( VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++ )
  FUNC_3(VAR_1[VAR_6]);

 FUNC_2(0x0F, VAR_0);





 FUNC_4("enter showtime\n");

 return 0;
}
