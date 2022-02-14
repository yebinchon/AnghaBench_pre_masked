
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_client {int client_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,struct ib_client*,int ) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ib_client *VAR_5)
{
 int VAR_6;

 FUNC_0(&VAR_3);





 VAR_5->client_id = VAR_4;
 VAR_6 = FUNC_2(&VAR_2, VAR_5->client_id, VAR_5, VAR_1);
 if (VAR_6)
  goto out;

 VAR_4++;
 FUNC_3(&VAR_2, VAR_5->client_id, VAR_0);

out:
 FUNC_1(&VAR_3);
 return VAR_6;
}
