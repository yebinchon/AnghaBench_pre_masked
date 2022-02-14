
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_link {int eh_context; } ;


 int VAR_0 ;
 unsigned long* FUNC_0 (int *) ;
 int FUNC_1 (struct ata_link*,unsigned long const*,unsigned long,int*,int *) ;

int FUNC_2(struct ata_link *VAR_1, unsigned int *VAR_2,
         unsigned long VAR_3)
{
 const unsigned long *VAR_4 = FUNC_0(&VAR_1->eh_context);
 bool VAR_5;
 int VAR_6;


 VAR_6 = FUNC_1(VAR_1, VAR_4, VAR_3, &VAR_5, ((void*)0));
 return VAR_5 ? -VAR_0 : VAR_6;
}
