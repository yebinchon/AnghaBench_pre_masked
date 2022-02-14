
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct capincci {int list; struct capidev* cdev; int ncci; } ;
struct capidev {int nccis; } ;


 int VAR_0 ;
 int FUNC_0 (struct capidev*,struct capincci*) ;
 struct capincci* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static struct capincci *FUNC_3(struct capidev *VAR_1, u32 VAR_2)
{
 struct capincci *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->ncci = VAR_2;
 VAR_3->cdev = VAR_1;

 FUNC_0(VAR_1, VAR_3);

 FUNC_2(&VAR_3->list, &VAR_1->nccis);

 return VAR_3;
}
