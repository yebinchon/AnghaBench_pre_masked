
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_link {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_link*,unsigned int*,int,unsigned long,int ) ;
 int FUNC_1 (struct ata_link*) ;

__attribute__((used)) static int FUNC_2(struct ata_link *VAR_2,
    unsigned int *VAR_3, unsigned long VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_2);
 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_5, VAR_4, VAR_1);
 if (VAR_5 && VAR_6 == -VAR_0)
  return FUNC_0(VAR_2, VAR_3, 0,
      VAR_4, VAR_1);

 return VAR_6;
}
