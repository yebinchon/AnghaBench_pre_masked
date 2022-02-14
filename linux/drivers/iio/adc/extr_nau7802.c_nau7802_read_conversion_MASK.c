
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau7802_state {int last_value; int data_lock; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct nau7802_state *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_3->data_lock);
 VAR_4 = FUNC_0(VAR_3->client, VAR_2);
 if (VAR_4 < 0)
  goto nau7802_read_conversion_out;
 VAR_3->last_value = VAR_4 << 16;

 VAR_4 = FUNC_0(VAR_3->client, VAR_1);
 if (VAR_4 < 0)
  goto nau7802_read_conversion_out;
 VAR_3->last_value |= VAR_4 << 8;

 VAR_4 = FUNC_0(VAR_3->client, VAR_0);
 if (VAR_4 < 0)
  goto nau7802_read_conversion_out;
 VAR_3->last_value |= VAR_4;

 VAR_3->last_value = FUNC_3(VAR_3->last_value, 23);

nau7802_read_conversion_out:
 FUNC_2(&VAR_3->data_lock);

 return VAR_4;
}
