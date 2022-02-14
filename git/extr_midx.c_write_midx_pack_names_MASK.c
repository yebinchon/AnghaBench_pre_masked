
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct pack_info {unsigned char* pack_name; scalar_t__ expired; } ;
struct hashfile {int dummy; } ;
typedef int padding ;


 int FUNC_0 (char*,unsigned char*,unsigned char*) ;
 int VAR_0 ;
 int FUNC_1 (struct hashfile*,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_3 (unsigned char*,unsigned char*) ;
 int FUNC_4 (unsigned char*) ;

__attribute__((used)) static size_t FUNC_5(struct hashfile *VAR_1,
        struct pack_info *VAR_2,
        uint32_t VAR_3)
{
 uint32_t VAR_4;
 unsigned char VAR_5[VAR_0];
 size_t VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  size_t VAR_7;

  if (VAR_2[VAR_4].expired)
   continue;

  if (VAR_4 && FUNC_3(VAR_2[VAR_4].pack_name, VAR_2[VAR_4 - 1].pack_name) <= 0)
   FUNC_0("incorrect pack-file order: %s before %s",
       VAR_2[VAR_4 - 1].pack_name,
       VAR_2[VAR_4].pack_name);

  VAR_7 = FUNC_4(VAR_2[VAR_4].pack_name) + 1;
  FUNC_1(VAR_1, VAR_2[VAR_4].pack_name, VAR_7);
  VAR_6 += VAR_7;
 }


 VAR_4 = VAR_0 - (VAR_6 % VAR_0);
 if (VAR_4 < VAR_0) {
  FUNC_2(VAR_5, 0, sizeof(VAR_5));
  FUNC_1(VAR_1, VAR_5, VAR_4);
  VAR_6 += VAR_4;
 }

 return VAR_6;
}
