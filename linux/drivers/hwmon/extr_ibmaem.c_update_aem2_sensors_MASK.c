
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aem_data {int lock; int * pcap; int * temp; scalar_t__ valid; scalar_t__ last_updated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct aem_data*,int ,int,int *,int) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct aem_data*) ;

__attribute__((used)) static void FUNC_5(struct aem_data *VAR_6)
{
 int VAR_7;

 FUNC_1(&VAR_6->lock);
 if (FUNC_3(VAR_5, VAR_6->last_updated + VAR_4) &&
     VAR_6->valid)
  goto out;

 FUNC_4(VAR_6);
 FUNC_0(VAR_6, VAR_0, 0, &VAR_6->temp[0], 1);
 FUNC_0(VAR_6, VAR_0, 1, &VAR_6->temp[1], 1);

 for (VAR_7 = VAR_3; VAR_7 <= VAR_2; VAR_7++)
  FUNC_0(VAR_6, VAR_1, VAR_7,
    &VAR_6->pcap[VAR_7], 2);
out:
 FUNC_2(&VAR_6->lock);
}
