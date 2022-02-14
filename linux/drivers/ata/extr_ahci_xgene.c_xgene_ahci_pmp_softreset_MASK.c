
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_port {int dummy; } ;
struct ata_link {struct ata_port* ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_link*,unsigned int*,int,unsigned long,int ) ;
 void* FUNC_1 (struct ata_port*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct ata_link*) ;
 int FUNC_4 (int,void*) ;

__attribute__((used)) static int FUNC_5(struct ata_link *VAR_4, unsigned int *VAR_5,
     unsigned long VAR_6)
{
 int VAR_7 = FUNC_3(VAR_4);
 struct ata_port *VAR_8 = VAR_4->ap;
 u32 VAR_9;
 void *VAR_10 = FUNC_1(VAR_8);
 u32 VAR_11;





 VAR_11 = FUNC_2(VAR_10 + VAR_0);
 VAR_11 &= ~VAR_1;
 VAR_11 |= VAR_7 << VAR_2;
 FUNC_4(VAR_11, VAR_10 + VAR_0);

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_7, VAR_6, VAR_3);

 return VAR_9;
}
