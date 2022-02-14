
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int crc32; } ;
struct object_entry {scalar_t__ in_pack_type; TYPE_2__ idx; } ;
struct hashfile {int dummy; } ;
typedef scalar_t__ off_t ;
struct TYPE_4__ {scalar_t__ offset; } ;
struct TYPE_6__ {TYPE_1__ idx; } ;


 TYPE_3__* FUNC_0 (struct object_entry*) ;
 int FUNC_1 (struct object_entry*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct hashfile*) ;
 int FUNC_3 (struct hashfile*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct object_entry*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct hashfile*,struct object_entry*,unsigned long,int) ;
 scalar_t__ FUNC_6 (struct hashfile*,struct object_entry*,unsigned long,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static off_t FUNC_7(struct hashfile *VAR_8,
     struct object_entry *VAR_9,
     off_t VAR_10)
{
 unsigned long VAR_11;
 off_t VAR_12;
 int VAR_13, VAR_14;

 if (!VAR_4)
  FUNC_2(VAR_8);


 if (!VAR_3 || !VAR_2)
  VAR_11 = 0;
 else if (VAR_3 <= VAR_10)




  VAR_11 = 1;
 else
  VAR_11 = VAR_3 - VAR_10;

 if (!FUNC_0(VAR_9))
  VAR_13 = 0;
 else if (!VAR_3)
        VAR_13 = 1;
 else if (FUNC_0(VAR_9)->idx.offset == (off_t)-1)
  VAR_13 = 0;
 else if (FUNC_0(VAR_9)->idx.offset)
  VAR_13 = 1;
 else
  VAR_13 = 0;

 if (!VAR_5)
  VAR_14 = 0;
 else if (!FUNC_1(VAR_9))
  VAR_14 = 0;
 else if (FUNC_4(VAR_9) == VAR_1 ||
   FUNC_4(VAR_9) == VAR_0)

  VAR_14 = VAR_13;

 else if (FUNC_4(VAR_9) != VAR_9->in_pack_type)
  VAR_14 = 0;
 else if (FUNC_0(VAR_9))
  VAR_14 = 0;
 else
  VAR_14 = 1;



 if (!VAR_14)
  VAR_12 = FUNC_5(VAR_8, VAR_9, VAR_11, VAR_13);
 else
  VAR_12 = FUNC_6(VAR_8, VAR_9, VAR_11, VAR_13);
 if (!VAR_12)
  return 0;

 if (VAR_13)
  VAR_7++;
 VAR_6++;
 if (!VAR_4)
  VAR_9->idx.crc32 = FUNC_3(VAR_8);
 return VAR_12;
}
