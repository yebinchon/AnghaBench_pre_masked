
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fsi_slave {int link; int master; int id; } ;


 int FUNC_0 (int ,int ,int ,int ,void*,size_t) ;
 int FUNC_1 (struct fsi_slave*,int *,int *) ;
 int FUNC_2 (struct fsi_slave*,int,int ,size_t) ;
 int VAR_0 ;

int FUNC_3(struct fsi_slave *VAR_1, uint32_t VAR_2,
   void *VAR_3, size_t VAR_4)
{
 uint8_t VAR_5 = VAR_1->id;
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_1(VAR_1, &VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_6 = FUNC_0(VAR_1->master, VAR_1->link,
    VAR_5, VAR_2, VAR_3, VAR_4);
  if (!VAR_6)
   break;

  VAR_7 = FUNC_2(VAR_1, 0, VAR_2, VAR_4);
  if (VAR_7)
   break;
 }

 return VAR_6;
}
