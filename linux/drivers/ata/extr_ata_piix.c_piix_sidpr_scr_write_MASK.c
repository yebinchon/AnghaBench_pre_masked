
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct piix_host_priv {scalar_t__ sidpr; } ;
struct ata_link {TYPE_2__* ap; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {struct piix_host_priv* private_data; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct ata_link*,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct ata_link *VAR_3,
    unsigned int VAR_4, u32 VAR_5)
{
 struct piix_host_priv *VAR_6 = VAR_3->ap->host->private_data;

 if (VAR_4 >= FUNC_0(VAR_2))
  return -VAR_0;

 FUNC_2(VAR_3, VAR_4);
 FUNC_1(VAR_5, VAR_6->sidpr + VAR_1);
 return 0;
}
