
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_io_client {int pool; int bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dm_io_client* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,unsigned int,int ,int ) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (struct dm_io_client*) ;
 struct dm_io_client* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned int,int ) ;

struct dm_io_client *FUNC_7(void)
{
 struct dm_io_client *VAR_4;
 unsigned VAR_5 = FUNC_2();
 int VAR_6;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_6(&VAR_4->pool, VAR_5, VAR_3);
 if (VAR_6)
  goto bad;

 VAR_6 = FUNC_1(&VAR_4->bios, VAR_5, 0, VAR_0);
 if (VAR_6)
  goto bad;

 return VAR_4;

   bad:
 FUNC_5(&VAR_4->pool);
 FUNC_3(VAR_4);
 return FUNC_0(VAR_6);
}
