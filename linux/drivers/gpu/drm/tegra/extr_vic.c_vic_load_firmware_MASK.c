
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * data; } ;
struct TYPE_5__ {int * drm; } ;
struct vic {TYPE_3__ falcon; TYPE_2__* config; TYPE_1__ client; } ;
struct TYPE_6__ {int firmware; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_2(struct vic *VAR_0)
{
 int VAR_1;

 if (VAR_0->falcon.data)
  return 0;

 VAR_0->falcon.data = VAR_0->client.drm;

 VAR_1 = FUNC_1(&VAR_0->falcon, VAR_0->config->firmware);
 if (VAR_1 < 0)
  goto cleanup;

 VAR_1 = FUNC_0(&VAR_0->falcon);
 if (VAR_1 < 0)
  goto cleanup;

 return 0;

cleanup:
 VAR_0->falcon.data = ((void*)0);
 return VAR_1;
}
