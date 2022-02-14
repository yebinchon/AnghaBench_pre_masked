
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_segment_priv {int dummy; } ;
struct agp_client {int num_segments; struct agp_segment_priv** segments; } ;


 int FUNC_0 (char*,struct agp_segment_priv**,int,struct agp_client*) ;
 int FUNC_1 (struct agp_client*) ;

__attribute__((used)) static void FUNC_2(struct agp_client *VAR_0,
          struct agp_segment_priv ** VAR_1, int VAR_2)
{
 struct agp_segment_priv **VAR_3;

 VAR_3 = VAR_0->segments;

 if (VAR_3 != ((void*)0))
  FUNC_1(VAR_0);

 FUNC_0("Adding seg %p (%d segments) to client %p", VAR_1, VAR_2, VAR_0);
 VAR_0->num_segments = VAR_2;
 VAR_0->segments = VAR_1;
}
