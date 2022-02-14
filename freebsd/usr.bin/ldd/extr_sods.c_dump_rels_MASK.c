
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct relocation_info {unsigned int r_length; unsigned long r_symbolnum; scalar_t__ r_copy; scalar_t__ r_jmptable; scalar_t__ r_baserel; scalar_t__ r_extern; scalar_t__ r_pcrel; scalar_t__ r_relative; scalar_t__ r_address; } ;
struct TYPE_2__ {unsigned long a_text; unsigned long a_data; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,char*,...) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_4(const char *VAR_3, const struct relocation_info *VAR_4,
    unsigned long VAR_5, const char *(*VAR_6)(unsigned long),
    unsigned char *VAR_7)
{
    unsigned long VAR_8;

    FUNC_2("  %s:\n", VAR_3);
    for (VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {
 const struct relocation_info *VAR_9 = &VAR_4[VAR_8];
 unsigned int VAR_10;
 char VAR_11[16];

 VAR_10 = 1u << VAR_9->r_length;

 if (VAR_1 <= (unsigned long)VAR_9->r_address
   && (unsigned long)VAR_9->r_address < VAR_1 + VAR_0->a_text + VAR_0->a_data
   && 1 <= VAR_10 && VAR_10 <= 4) {




     switch (VAR_10) {
     case 1:
  FUNC_3(VAR_11, sizeof VAR_11, "      [%02x]",
    *(unsigned const char *)(VAR_2 + VAR_9->r_address));
  break;
     case 2:
  FUNC_3(VAR_11, sizeof VAR_11, "    [%04x]",
    *(unsigned const short *)
    FUNC_1(VAR_2 + VAR_9->r_address));
  break;
     case 4:
  FUNC_3(VAR_11, sizeof VAR_11, "[%08lx]",
    *(unsigned const long *)
    FUNC_0(VAR_2 + VAR_9->r_address));
  break;
     }
 } else
     FUNC_3(VAR_11, sizeof VAR_11, "          ");

 FUNC_2("    %6lu %8x/%u %s %c%c%c%c%c%c", VAR_8,
     VAR_9->r_address, VAR_10,
     VAR_11,
     VAR_9->r_extern ? 'e' : '-',
     VAR_9->r_jmptable ? 'j' : '-',
     VAR_9->r_relative ? 'r' : '-',
     VAR_9->r_baserel ? 'b' : '-',
     VAR_9->r_pcrel ? 'p' : '-',
     VAR_9->r_copy ? 'c' : '-');

 if (VAR_9->r_extern || VAR_9->r_baserel || VAR_9->r_jmptable || VAR_9->r_copy) {
     FUNC_2(" %4u %s", VAR_9->r_symbolnum, VAR_6(VAR_9->r_symbolnum));
     VAR_7[VAR_9->r_symbolnum] = 1;
 }

 FUNC_2("\n");
    }
}
