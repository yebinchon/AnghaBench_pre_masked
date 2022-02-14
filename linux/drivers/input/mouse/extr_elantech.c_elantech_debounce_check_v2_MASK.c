
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct psmouse {unsigned char* packet; } ;
typedef int debounce_packet ;


 int FUNC_0 (unsigned char*,int const*,int) ;

__attribute__((used)) static int FUNC_1(struct psmouse *VAR_0)
{




 static const u8 VAR_1[] = {
  0x84, 0xff, 0xff, 0x02, 0xff, 0xff
 };
        unsigned char *VAR_2 = VAR_0->packet;

        return !FUNC_0(VAR_2, VAR_1, sizeof(VAR_1));
}
