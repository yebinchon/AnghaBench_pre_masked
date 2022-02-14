
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int const u_short ;
typedef int u_long ;
typedef scalar_t__ u_int32_t ;
typedef scalar_t__ u_char ;
struct udphdr {int const uh_dport; int const uh_sport; } ;
struct tcphdr {int th_off; int th_flags; int th_ack; int th_seq; int const th_dport; int const th_sport; } ;
struct ncpaddr {int dummy; } ;
struct ip6_hdr {int ip6_nxt; int const ip6_plen; int ip6_dst; int ip6_src; } ;
struct ip {int ip_hl; int ip_p; int ip_v; int const ip_off; scalar_t__ ip_tos; int const ip_len; int ip_dst; int ip_src; } ;
struct icmp6_hdr {int icmp6_type; } ;
struct icmp {int icmp_type; } ;
struct filter {char* name; scalar_t__ logok; } ;
struct TYPE_9__ {struct filter alive; } ;
struct TYPE_7__ {int tos; } ;
struct TYPE_8__ {TYPE_1__ urgent; } ;
struct TYPE_10__ {TYPE_2__ cfg; } ;
struct bundle {TYPE_3__ filter; TYPE_4__ ncp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bundle*,int ) ;
 scalar_t__ FUNC_1 (unsigned char const*,scalar_t__,struct filter*,unsigned int*) ;
 unsigned char const VAR_2 ;
 unsigned char const VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct udphdr const*,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*,...) ;
 int FUNC_5 (int const*,unsigned char const*,int) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*,int,int) ;
 int FUNC_8 (TYPE_4__*,int,int) ;
 char* FUNC_9 (struct ncpaddr*) ;
 int FUNC_10 (struct ncpaddr*,int ) ;
 int FUNC_11 (struct ncpaddr*,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int const) ;
 int FUNC_14 (char*,int,char*,...) ;
 scalar_t__ FUNC_15 (char*) ;

int
FUNC_16(struct bundle *VAR_11, u_int32_t VAR_12,
            const unsigned char *VAR_13, int VAR_14, struct filter *VAR_15,
            const char *VAR_16, unsigned *VAR_17)
{
  char VAR_18[200];
  static const char *const VAR_19[] = {
    "FIN", "SYN", "RST", "PSH", "ACK", "URG"
  };
  const struct tcphdr *VAR_20;
  const struct udphdr *VAR_21;
  const struct icmp *VAR_22;

  const struct icmp6_hdr *VAR_23;

  const unsigned char *VAR_24;
  struct ncpaddr VAR_25, VAR_26;
  int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
  unsigned VAR_36;
  u_char VAR_37;

  VAR_32 = (FUNC_3(VAR_7) || FUNC_3(VAR_6)) &&
          (!VAR_15 || VAR_15->logok);
  VAR_36 = 0;
  VAR_31 = 0;


  if (VAR_12 == VAR_1) {
    const struct ip6_hdr *VAR_38 = (const struct ip6_hdr *)VAR_13;

    FUNC_11(&VAR_25, &VAR_38->ip6_src);
    FUNC_11(&VAR_26, &VAR_38->ip6_dst);
    VAR_34 = FUNC_13(VAR_38->ip6_plen);
    VAR_24 = VAR_13 + sizeof *VAR_38;
    VAR_27 = VAR_38->ip6_nxt;
    VAR_37 = 0;
    VAR_35 = 0;
  } else

  {
    const struct ip *VAR_39 = (const struct ip *)VAR_13;

    FUNC_10(&VAR_25, VAR_39->ip_src);
    FUNC_10(&VAR_26, VAR_39->ip_dst);
    VAR_34 = FUNC_13(VAR_39->ip_len) - (VAR_39->ip_hl << 2);
    VAR_24 = VAR_13 + (VAR_39->ip_hl << 2);
    VAR_27 = VAR_39->ip_p;
    VAR_37 = VAR_39->ip_tos;
    VAR_35 = FUNC_13(VAR_39->ip_off) & VAR_5;
  }

  VAR_21 = ((void*)0);

  if (VAR_32 && VAR_36 < sizeof VAR_18) {
    if (VAR_16)
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36, "%s", VAR_16);
    else if (VAR_15)
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36, "%s ", VAR_15->name);
    else
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36, "  ");
    VAR_36 += FUNC_15(VAR_18 + VAR_36);
  }

  switch (VAR_27) {
  case 147:
    if (VAR_32 && VAR_36 < sizeof VAR_18) {
      VAR_29 = VAR_34 - sizeof *VAR_22;
      VAR_22 = (const struct icmp *)VAR_24;
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "ICMP: %s:%d ---> ", FUNC_9(&VAR_25), VAR_22->icmp_type);
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "%s (%d/%d)", FUNC_9(&VAR_26), VAR_29, VAR_14);
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
    }
    break;


  case 146:
    if (VAR_32 && VAR_36 < sizeof VAR_18) {
      VAR_29 = VAR_34 - sizeof *VAR_23;
      VAR_23 = (const struct icmp6_hdr *)VAR_24;
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "ICMP: %s:%d ---> ", FUNC_9(&VAR_25), VAR_23->icmp6_type);
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "%s (%d/%d)", FUNC_9(&VAR_26), VAR_29, VAR_14);
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
    }
    break;


  case 140:
    VAR_21 = (const struct udphdr *)VAR_24;
    if (VAR_37 == VAR_4 && VAR_11->ncp.cfg.urgent.tos)
      VAR_31++;

    if (!VAR_35 && FUNC_8(&VAR_11->ncp, FUNC_13(VAR_21->uh_sport),
                                     FUNC_13(VAR_21->uh_dport)))
      VAR_31++;

    if (VAR_32 && VAR_36 < sizeof VAR_18) {
      VAR_29 = VAR_34 - sizeof *VAR_21;
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "UDP: %s:%d ---> ", FUNC_9(&VAR_25), FUNC_13(VAR_21->uh_sport));
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "%s:%d (%d/%d)", FUNC_9(&VAR_26), FUNC_13(VAR_21->uh_dport),
               VAR_29, VAR_14);
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
    }

    if (FUNC_0(VAR_11, VAR_8) &&
        VAR_24[sizeof *VAR_21] == VAR_2 &&
        VAR_24[sizeof *VAR_21 + 1] == VAR_3) {
      u_short VAR_40;
      const char *VAR_41;

      FUNC_5(&VAR_40, VAR_24 + sizeof *VAR_21 + 2, sizeof VAR_40);
      VAR_41 = ((void*)0);

      switch (FUNC_13(VAR_40)) {
        case 135:
          FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36, " contains ");
          VAR_33 = FUNC_16(VAR_11, VAR_0, VAR_24 + sizeof *VAR_21 + 4,
                               VAR_14 - (VAR_24 - VAR_13) - sizeof *VAR_21 - 4, VAR_15,
                               VAR_18, VAR_17);
          if (VAR_33 != -2)
              return VAR_33;
          VAR_41 = "IP";
          break;

        case 128: VAR_41 = "compressed VJ"; break;
        case 129: VAR_41 = "uncompressed VJ"; break;
        case 131: VAR_41 = "Multi-link"; break;
        case 136: VAR_41 = "Individual link CCP"; break;
        case 137: VAR_41 = "CCP"; break;
        case 134: VAR_41 = "IPCP"; break;
        case 133: VAR_41 = "LCP"; break;
        case 130: VAR_41 = "PAP"; break;
        case 139: VAR_41 = "CBCP"; break;
        case 132: VAR_41 = "LQR"; break;
        case 138: VAR_41 = "CHAP"; break;
      }
      if (VAR_41) {
        FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
                 " - %s data", VAR_41);
        VAR_36 += FUNC_15(VAR_18 + VAR_36);
      }
    }

    break;


  case 148:
    if (VAR_32 && VAR_36 < sizeof VAR_18) {
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
          "GRE: %s ---> ", FUNC_9(&VAR_25));
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
              "%s (%d/%d)", FUNC_9(&VAR_26), VAR_34, VAR_14);
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
    }
    break;



  case 142:
    if (VAR_32 && VAR_36 < sizeof VAR_18) {
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "OSPF: %s ---> ", FUNC_9(&VAR_25));
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "%s (%d/%d)", FUNC_9(&VAR_26), VAR_34, VAR_14);
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
    }
    break;



  case 143:
    if (VAR_32 && VAR_36 < sizeof VAR_18) {
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "IPv6: %s ---> ", FUNC_9(&VAR_25));
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "%s (%d/%d)", FUNC_9(&VAR_26), VAR_34, VAR_14);
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
    }

    if (FUNC_0(VAR_11, VAR_8)) {
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36, " contains ");
      VAR_33 = FUNC_16(VAR_11, VAR_1, VAR_24, VAR_14 - (VAR_24 - VAR_13),
                           VAR_15, VAR_18, VAR_17);
      if (VAR_33 != -2)
        return VAR_33;
    }
    break;


  case 144:
    if (VAR_32 && VAR_36 < sizeof VAR_18) {
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "IPIP: %s ---> ", FUNC_9(&VAR_25));
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "%s", FUNC_9(&VAR_26));
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
    }

    if (FUNC_0(VAR_11, VAR_8) &&
        ((const struct ip *)VAR_24)->ip_v == 4) {
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36, " contains ");
      VAR_33 = FUNC_16(VAR_11, VAR_0, VAR_24, VAR_14 - (VAR_24 - VAR_13),
                           VAR_15, VAR_18, VAR_17);
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
      if (VAR_33 != -2)
        return VAR_33;
    }
    break;

  case 149:
    if (VAR_32 && VAR_36 < sizeof VAR_18) {
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "ESP: %s ---> ", FUNC_9(&VAR_25));
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36, "%s, spi %p",
               FUNC_9(&VAR_26), VAR_24);
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
    }
    break;

  case 150:
    if (VAR_32 && VAR_36 < sizeof VAR_18) {
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "AH: %s ---> ", FUNC_9(&VAR_25));
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36, "%s, spi %p",
               FUNC_9(&VAR_26), VAR_24 + sizeof(u_int32_t));
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
    }
    break;

  case 145:
    if (VAR_32 && VAR_36 < sizeof VAR_18) {
      VAR_21 = (const struct udphdr *)VAR_24;
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "IGMP: %s:%d ---> ", FUNC_9(&VAR_25),
               FUNC_13(VAR_21->uh_sport));
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "%s:%d", FUNC_9(&VAR_26), FUNC_13(VAR_21->uh_dport));
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
    }
    break;

  case 141:
    VAR_20 = (const struct tcphdr *)VAR_24;
    if (VAR_37 == VAR_4 && VAR_11->ncp.cfg.urgent.tos)
      VAR_31++;

    if (!VAR_35 && FUNC_7(&VAR_11->ncp, FUNC_13(VAR_20->th_sport),
                                     FUNC_13(VAR_20->th_dport)))
      VAR_31++;
    else if (!VAR_35 && FUNC_6(&VAR_11->ncp, VAR_34))
      VAR_31++;

    if (VAR_32 && VAR_36 < sizeof VAR_18) {
      VAR_29 = VAR_34 - (VAR_20->th_off << 2);
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
           "TCP: %s:%d ---> ", FUNC_9(&VAR_25), FUNC_13(VAR_20->th_sport));
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "%s:%d", FUNC_9(&VAR_26), FUNC_13(VAR_20->th_dport));
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
      VAR_30 = 0;
      for (VAR_28 = VAR_9; VAR_28 != 0x40; VAR_28 <<= 1) {
        if (VAR_20->th_flags & VAR_28) {
          FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36, " %s", VAR_19[VAR_30]);
          VAR_36 += FUNC_15(VAR_18 + VAR_36);
        }
        VAR_30++;
      }
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "  seq:%lx  ack:%lx (%d/%d)",
               (u_long)FUNC_12(VAR_20->th_seq), (u_long)FUNC_12(VAR_20->th_ack), VAR_29, VAR_14);
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
      if ((VAR_20->th_flags & VAR_10) && VAR_14 > 40) {
        const u_short *VAR_42;

        VAR_42 = (const u_short *)(VAR_24 + 20);
        if (FUNC_13(VAR_42[0]) == 0x0204) {
          FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
                   " MSS = %d", FUNC_13(VAR_42[1]));
          VAR_36 += FUNC_15(VAR_18 + VAR_36);
        }
      }
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36, " pri:%d", VAR_31);
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
    }
    break;

  default:
    if (VAR_16)
      return -2;

    if (VAR_32 && VAR_36 < sizeof VAR_18) {
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "<%d>: %s ---> ", VAR_27, FUNC_9(&VAR_25));
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
      FUNC_14(VAR_18 + VAR_36, sizeof VAR_18 - VAR_36,
               "%s (%d)", FUNC_9(&VAR_26), VAR_14);
      VAR_36 += FUNC_15(VAR_18 + VAR_36);
    }
    break;
  }

  if (VAR_15 && FUNC_1(VAR_13, VAR_12, VAR_15, VAR_17)) {
    if (VAR_32)
      FUNC_4(VAR_7, "%s - BLOCKED\n", VAR_18);
    VAR_33 = -1;
  } else {

    if (VAR_32 && FUNC_3(VAR_7)) {
      unsigned VAR_43;

      VAR_43 = 0;
      if (VAR_15 &&
          FUNC_1(VAR_13, VAR_12, &VAR_11->filter.alive, &VAR_43))
        FUNC_4(VAR_7, "%s - NO KEEPALIVE\n", VAR_18);
      else if (VAR_17 != ((void*)0)) {
        if(*VAR_17 == 0)
          *VAR_17 = VAR_43;
        if (*VAR_17) {
          if (*VAR_17 != VAR_43)
            FUNC_4(VAR_7, "%s - (timeout = %d / ALIVE = %d secs)\n",
                       VAR_18, *VAR_17, VAR_43);
          else
            FUNC_4(VAR_7, "%s - (timeout = %d secs)\n", VAR_18, *VAR_17);
        } else
          FUNC_4(VAR_7, "%s\n", VAR_18);
      }
    }
    VAR_33 = VAR_31;
  }

  if (VAR_15 && VAR_21 && FUNC_13(VAR_21->uh_dport) == 53 && FUNC_3(VAR_6))
    FUNC_2(VAR_21, VAR_15->name);

  return VAR_33;
}
