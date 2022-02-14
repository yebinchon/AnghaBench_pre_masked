
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*,int) ;

__attribute__((used)) static void
FUNC_5(struct archive *VAR_0, struct archive_entry *VAR_1, const char *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1) & 0777;
 if (VAR_3 == 0)
  VAR_3 = 0755;
 VAR_3 |= 0700;
 if (VAR_3 & 0040)
  VAR_3 |= 0010;
 if (VAR_3 & 0004)
  VAR_3 |= 0001;

 FUNC_3("   creating: %s/\n", VAR_2);
 FUNC_4(VAR_2, VAR_3);
 FUNC_0(FUNC_2(VAR_0));
}
