
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct era_metadata {int tm; int sm; } ;


 int FUNC_0 (struct era_metadata*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct era_metadata*) ;

__attribute__((used)) static int FUNC_4(struct era_metadata *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1) {
  FUNC_1(VAR_0->sm);
  FUNC_2(VAR_0->tm);
  return VAR_1;
 }

 return 0;
}
