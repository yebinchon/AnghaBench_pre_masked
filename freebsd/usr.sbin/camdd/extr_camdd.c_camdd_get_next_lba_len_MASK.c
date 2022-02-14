
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct camdd_dev_pass {int dummy; } ;
struct TYPE_2__ {struct camdd_dev_pass pass; } ;
struct camdd_dev {scalar_t__ next_io_pos_bytes; scalar_t__ sector_size; scalar_t__ blocksize; scalar_t__ max_sector; scalar_t__ sector_io_limit; TYPE_1__ dev_spec; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

int
FUNC_1(struct camdd_dev *VAR_0, uint64_t *VAR_1, ssize_t *VAR_2)
{
 struct camdd_dev_pass *VAR_3;
 uint32_t VAR_4;
 int VAR_5 = 0;

 VAR_3 = &VAR_0->dev_spec.pass;

 *VAR_1 = VAR_0->next_io_pos_bytes / VAR_0->sector_size;
 *VAR_2 = VAR_0->blocksize;
 VAR_4 = *VAR_2 / VAR_0->sector_size;






 if ((VAR_0->max_sector != 0)
  || (VAR_0->sector_io_limit != 0)) {
  uint64_t VAR_6;

  if ((VAR_0->max_sector != 0)
   && (VAR_0->sector_io_limit != 0))
   VAR_6 = FUNC_0(VAR_0->sector_io_limit, VAR_0->max_sector);
  else if (VAR_0->max_sector != 0)
   VAR_6 = VAR_0->max_sector;
  else
   VAR_6 = VAR_0->sector_io_limit;







  if (*VAR_1 > VAR_6) {
   *VAR_2 = 0;
   VAR_5 = 1;
  } else if (((*VAR_1 + VAR_4) > VAR_6 + 1)
   || ((*VAR_1 + VAR_4) < *VAR_1)) {





   VAR_4 = (VAR_6 + 1) - *VAR_1;
   *VAR_2 = VAR_4 * VAR_0->sector_size;
   VAR_5 = 1;
  }
 }

 VAR_0->next_io_pos_bytes += *VAR_2;

 return (VAR_5);
}
