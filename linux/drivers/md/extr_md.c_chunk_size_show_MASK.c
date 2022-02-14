
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ reshape_position; int chunk_sectors; int new_chunk_sectors; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int,...) ;

__attribute__((used)) static ssize_t
FUNC_1(struct mddev *VAR_1, char *VAR_2)
{
 if (VAR_1->reshape_position != VAR_0 &&
     VAR_1->chunk_sectors != VAR_1->new_chunk_sectors)
  return FUNC_0(VAR_2, "%d (%d)\n",
          VAR_1->new_chunk_sectors << 9,
          VAR_1->chunk_sectors << 9);
 return FUNC_0(VAR_2, "%d\n", VAR_1->chunk_sectors << 9);
}
