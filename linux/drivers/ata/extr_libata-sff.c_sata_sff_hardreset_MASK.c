
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_eh_context {int dummy; } ;
struct ata_link {int device; struct ata_eh_context eh_context; } ;


 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ,int,int *) ;
 unsigned long* FUNC_2 (struct ata_eh_context*) ;
 int FUNC_3 (struct ata_link*,unsigned long const*,unsigned long,int*,int ) ;

int FUNC_4(struct ata_link *VAR_1, unsigned int *VAR_2,
         unsigned long VAR_3)
{
 struct ata_eh_context *VAR_4 = &VAR_1->eh_context;
 const unsigned long *VAR_5 = FUNC_2(VAR_4);
 bool VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_1, VAR_5, VAR_3, &VAR_6,
     VAR_0);
 if (VAR_6)
  *VAR_2 = FUNC_1(VAR_1->device, 1, ((void*)0));

 FUNC_0("EXIT, class=%u\n", *VAR_2);
 return VAR_7;
}
