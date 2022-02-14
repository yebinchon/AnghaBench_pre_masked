
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_uiom_pd {int devs; int lock; void* domain; } ;


 int VAR_0 ;
 struct usnic_uiom_pd* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (void*,int ,int *) ;
 int FUNC_4 (struct usnic_uiom_pd*) ;
 struct usnic_uiom_pd* FUNC_5 (int,int ) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int VAR_3 ;

struct usnic_uiom_pd *FUNC_8(void)
{
 struct usnic_uiom_pd *VAR_4;
 void *VAR_5;

 VAR_4 = FUNC_5(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->domain = VAR_5 = FUNC_2(&VAR_2);
 if (!VAR_5) {
  FUNC_7("Failed to allocate IOMMU domain");
  FUNC_4(VAR_4);
  return FUNC_0(-VAR_0);
 }

 FUNC_3(VAR_4->domain, VAR_3, ((void*)0));

 FUNC_6(&VAR_4->lock);
 FUNC_1(&VAR_4->devs);

 return VAR_4;
}
