
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_block_manager {int read_only; int bufio; } ;
struct buffer_aux {int dummy; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 struct dm_block_manager* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct block_device*,unsigned int,unsigned int,int,int ,int ) ;
 int FUNC_4 (struct dm_block_manager*) ;
 struct dm_block_manager* FUNC_5 (int,int ) ;

struct dm_block_manager *FUNC_6(struct block_device *VAR_4,
       unsigned VAR_5,
       unsigned VAR_6)
{
 int VAR_7;
 struct dm_block_manager *VAR_8;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  VAR_7 = -VAR_0;
  goto bad;
 }

 VAR_8->bufio = FUNC_3(VAR_4, VAR_5, VAR_6,
        sizeof(struct buffer_aux),
        VAR_2,
        VAR_3);
 if (FUNC_1(VAR_8->bufio)) {
  VAR_7 = FUNC_2(VAR_8->bufio);
  FUNC_4(VAR_8);
  goto bad;
 }

 VAR_8->read_only = 0;

 return VAR_8;

bad:
 return FUNC_0(VAR_7);
}
