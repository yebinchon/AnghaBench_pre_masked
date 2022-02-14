
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau7802_state {int lock; int client; scalar_t__ conversion_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct nau7802_state *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_2->lock);
 VAR_2->conversion_count = 0;

 VAR_4 = FUNC_0(VAR_2->client, VAR_1);
 if (VAR_4 < 0)
  goto nau7802_sysfs_set_gain_out;
 VAR_4 = FUNC_1(VAR_2->client, VAR_1,
     (VAR_4 & (~VAR_0)) |
     VAR_3);

nau7802_sysfs_set_gain_out:
 FUNC_3(&VAR_2->lock);

 return VAR_4;
}
