
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pack_header {int dummy; } ;
struct hashfile {int dummy; } ;
typedef int off_t ;
typedef int buffer ;
struct TYPE_5__ {scalar_t__ pack_size; int pack_name; } ;
struct TYPE_4__ {scalar_t__ rawsz; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,...) ;
 int FUNC_4 (int ,double) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct hashfile*,unsigned char*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int,int,int ) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 double VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 double VAR_6 ;
 int FUNC_9 (int,unsigned char*,int) ;

__attribute__((used)) static off_t FUNC_10(struct hashfile *VAR_7)
{
 unsigned char VAR_8[8192];
 off_t VAR_9, VAR_10;
 int VAR_11;

 if (!FUNC_7(VAR_2))
  FUNC_2(FUNC_0("packfile is invalid: %s"), VAR_2->pack_name);

 VAR_11 = FUNC_5(VAR_2->pack_name);
 if (VAR_11 < 0)
  FUNC_3(FUNC_0("unable to open packfile for reuse: %s"),
     VAR_2->pack_name);

 if (FUNC_8(VAR_11, sizeof(struct pack_header), VAR_0) == -1)
  FUNC_3(FUNC_0("unable to seek in reused packfile"));

 if (VAR_4 < 0)
  VAR_4 = VAR_2->pack_size - VAR_5->rawsz;

 VAR_10 = VAR_9 = VAR_4 - sizeof(struct pack_header);

 while (VAR_9) {
  int VAR_12 = FUNC_9(VAR_11, VAR_8, sizeof(VAR_8));

  if (VAR_12 <= 0)
   FUNC_3(FUNC_0("unable to read from reused packfile"));

  if (VAR_12 > VAR_9)
   VAR_12 = VAR_9;

  FUNC_6(VAR_7, VAR_8, VAR_12);
  VAR_9 -= VAR_12;
  VAR_6 = VAR_3 *
    (((double)(VAR_10 - VAR_9)) / VAR_10);
  FUNC_4(VAR_1, VAR_6);
 }

 FUNC_1(VAR_11);
 VAR_6 = VAR_3;
 FUNC_4(VAR_1, VAR_6);
 return VAR_4 - sizeof(struct pack_header);
}
